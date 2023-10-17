// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tools/InterFacePlayObj.h"
#include "CoreMinimal.h" // ������ �ӵ��� ������ �ϱ����� �⺻���� �ּ����� ���̺귯���� ������ ���
#include "GameFramework/Actor.h"// AActor class ��� ����


//*.generated.h" �𸮾� Ŭ���� ���� ó���ϴ� ���
//��� �𸮾� Ŭ������ �����Ƿ��� �Ʒ� �ڵ带 �־�����Ѵ�.
//�ݵ�� ��� #include �������� ��ġ �ؾ��Ѵ�.
// ���ô� �ؿ�
#include "moveleftright.generated.h" 

UCLASS()// �𸮾� Ŭ���� ����
//UNREALCODE_API : �� Ŭ������ UNREALCODE_API ��⿡ ���Եȴ�.
class UNREALCODE_API Amoveleftright : public AActor, public IInterFacePlayObj//  public AActor : AAtor�� ����� ��ӹްڴ�
{
	GENERATED_BODY() // �𸮾� �ڵ� ���� �Լ� - �𸮾� Ŭ���� ���� �⺻ ��Ģ

	
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

	//���ε� �Ŵ� �Լ��� ������ �����
	UFUNCTION()
	void EventOverlap(bool IsBegin);



public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Code_Doplay(bool IsPlay); //�������Ʈ ȣ��� �Լ��� ���� // �ǵ� ����

	virtual void Code_Doplay_Implementation(bool IsPlay) override;// c++���� ����� �Լ�

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
