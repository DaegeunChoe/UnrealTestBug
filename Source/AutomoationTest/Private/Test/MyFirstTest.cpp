// Fill out your copyright notice in the Description page of Project Settings.



#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "Tests/AutomationCommon.h"


constexpr EAutomationTestFlags TestFlags = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);
IMPLEMENT_SIMPLE_AUTOMATION_TEST(Test1, "MyFirstTest.Test1", TestFlags);
bool Test1::RunTest(const FString& Parameters)
{
	return (2 + 3 == 5);
}
IMPLEMENT_SIMPLE_AUTOMATION_TEST(Test2, "MyFirstTest.Test2", TestFlags);
bool Test2::RunTest(const FString& Parameters)
{
	return (2 + 3 == 5);
}
