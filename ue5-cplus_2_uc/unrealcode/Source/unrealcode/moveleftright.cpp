// Fill out your copyright notice in the Description page of Project Settings.


#include "moveleftright.h"

// Sets default values
Amoveleftright::Amoveleftright() : m_LocX(0),m_IsMoveRight (true), m_IsPlay(false)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CreateDefaultSubobject: new 키워드와 같이 언리얼에서 동적으로 객체를 생성하는 키워드
	//TEXT : 언리얼에서 사용하는 문자형 중에 하나
	//<USceneComponent>(TEXT("SceneROooRooT"));// USceneComponent객체를 "SceneRooRooT" 이름으로 동적으로 생성
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRooRooT"));
	//<USceneComponent>(TEXT("mymyMesh"));// USceneComponent객체를 "mymyMesh" 이름으로 동적으로 생성
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mymyMesh"));

	SetRootComponent(Scene); // Scene을 루트 컴포넌트로 올리겠다.
	//RootComponent = Scene; // 위와 동일

	//AttachToComponent : Component를 붙이는 기능
	//Scene에 붙인다. 현재 좌표값을 Scene 기준에 Relative(상대) 좌표계로
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	//RootComponent에 붙인다. 현재 좌표값을 RootComponent 기준에 Relative(상대) 좌표계로
	//StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	// .은 레퍼런스로 참조 -> 포인터로 참조

	//UAsset 가져오기
	// EX)
	//ConstructorHelpers::FObjectFinder<> : 오브젝트 에셋을 찾는다.
	//<UStaticMesh> : 찾을 에셋 타입 
	//sm : 찾아서 넣을 객체 이름
	// 할 수는 있지만 굳이 쓰는 방법은 아니다
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> sm(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));

	//if (sm.Succeeded())// 에셋을 불러오기 성공 여부 체크
	//{
	//	StaticMesh->SetStaticMesh(sm.Object); // StaticMeshComponent에 StaticMesh 적용
	//}
	


}
Amoveleftright::~Amoveleftright()
{
}



// Called when the game starts or when spawned
void Amoveleftright::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Amoveleftright::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); // 오버라이드한 부모 함수를 작동한다
	
	//IsMoveRight;// 움직일 방향

	//LocX += 1;// 오른쪽 

	//LocX -= 1;// 왼쪽
	////SetRelativeLocation : 상대적인 위치값을 설정한다
	////FVector : 언리얼에서 사용하는 3차원 좌표 변수
	//StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));
	if (m_IsPlay == false)
		return;
	
	if (m_IsMoveRight)
	{
		m_LocX += 1;
		StaticMesh->SetRelativeLocation(FVector(m_LocX, 0, 0));
		if (m_LocX >= 200)
		{
			m_IsMoveRight = false;
		}
	}
	else
	{
		m_LocX -= 1;
		StaticMesh->SetRelativeLocation(FVector(m_LocX, 0, 0));
		if (m_LocX <= -200)
		{
			m_IsMoveRight = true;
		}
	}

}

void Amoveleftright::Code_Doplay_Implementation(bool IsPlay)
{
	m_IsPlay = IsPlay;
}

