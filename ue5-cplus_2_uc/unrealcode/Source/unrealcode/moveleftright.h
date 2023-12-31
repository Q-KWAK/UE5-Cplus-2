// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tools/InterFacePlayObj.h"
#include "CoreMinimal.h" // 컴파일 속도를 빠르게 하기위해 기본적인 최소한의 라이브러리를 포함한 헤더
#include "GameFramework/Actor.h"// AActor class 헤더 파일


//*.generated.h" 언리얼 클래스 생성 처리하는 헤더
//모든 언리얼 클래스가 생성되려면 아래 코드를 넣어줘야한다.
//반드시 모든 #include 마지막에 배치 해야한다.
// 예시는 밑에
#include "moveleftright.generated.h" 

UCLASS()// 언리얼 클래스 선언
//UNREALCODE_API : 이 클래스는 UNREALCODE_API 모듈에 포함된다.
class UNREALCODE_API Amoveleftright : public AActor, public IInterFacePlayObj//  public AActor : AAtor에 기능을 상속받겠다
{
	GENERATED_BODY() // 언리얼 코드 생성 함수 - 언리얼 클래스 생성 기본 규칙

	
public:	
	// sets default values for this actor's properties
	Amoveleftright();
	~Amoveleftright();

protected:
	// called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// called every frame
	virtual void Tick(float deltatime) override;

	//바인드 거는 함수는 무조건 유펑션
	UFUNCTION()
	void EventOverlap(bool IsBegin);



public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Code_Doplay(bool IsPlay); //블루프린트 호출용 함수명 선언 // 건들 ㄴㄴ

	virtual void Code_Doplay_Implementation(bool IsPlay) override;// c++에서 실행될 함수

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* Scene;

	//UPROPERTY : https://docs.unrealengine.com/4.26/ko/ProgrammingAndScripting/GameplayArchitecture/Properties/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	float m_LocX;
	bool m_IsMoveRight;
	bool m_IsPlay;


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<class ACORE_SWITCH> m_swich;


};
