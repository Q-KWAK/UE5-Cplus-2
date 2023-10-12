// Fill out your copyright notice in the Description page of Project Settings.


#include "moveleftright.h"

// Sets default values
Amoveleftright::Amoveleftright() : LocX(0),IsMoveRight (true)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CreateDefaultSubobject: new Ű����� ���� �𸮾󿡼� �������� ��ü�� �����ϴ� Ű����
	//TEXT : �𸮾󿡼� ����ϴ� ������ �߿� �ϳ�
	//<USceneComponent>(TEXT("SceneROooRooT"));// USceneComponent��ü�� "SceneRooRooT" �̸����� �������� ����
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRooRooT"));
	//<USceneComponent>(TEXT("mymyMesh"));// USceneComponent��ü�� "mymyMesh" �̸����� �������� ����
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mymyMesh"));

	SetRootComponent(Scene); // Scene�� ��Ʈ ������Ʈ�� �ø��ڴ�.
	//RootComponent = Scene; // ���� ����

	//AttachToComponent : Component�� ���̴� ���
	//Scene�� ���δ�. ���� ��ǥ���� Scene ���ؿ� Relative(���) ��ǥ���
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	//RootComponent�� ���δ�. ���� ��ǥ���� RootComponent ���ؿ� Relative(���) ��ǥ���
	//StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	// .�� ���۷����� ���� -> �����ͷ� ����

	//UAsset ��������
	// EX)
	//ConstructorHelpers::FObjectFinder<> : ������Ʈ ������ ã�´�.
	//<UStaticMesh> : ã�� ���� Ÿ�� 
	//sm : ã�Ƽ� ���� ��ü �̸�
	// �� ���� ������ ���� ���� ����� �ƴϴ�
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> sm(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));

	//if (sm.Succeeded())// ������ �ҷ����� ���� ���� üũ
	//{
	//	StaticMesh->SetStaticMesh(sm.Object); // StaticMeshComponent�� StaticMesh ����
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
	Super::Tick(DeltaTime); // �������̵��� �θ� �Լ��� �۵��Ѵ�
	
	//IsMoveRight;// ������ ����

	//LocX += 1;// ������ 

	//LocX -= 1;// ����
	////SetRelativeLocation : ������� ��ġ���� �����Ѵ�
	////FVector : �𸮾󿡼� ����ϴ� 3���� ��ǥ ����
	//StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));
	if (IsMoveRight)
	{
		LocX += 1;
		StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));
		if (LocX >= 200)
		{
			IsMoveRight = false;
		}
	}
	else
	{
		LocX -= 1;
		StaticMesh->SetRelativeLocation(FVector(LocX, 0, 0));
		if (LocX <= -200)
		{
			IsMoveRight = true;
		}
	}

}

