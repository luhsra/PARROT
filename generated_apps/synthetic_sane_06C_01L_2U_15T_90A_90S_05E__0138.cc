#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU0Task1Subtask8);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task3Subtask4);
DeclareTask(CPU2Task5Subtask3);
DeclareTask(CPU2Task5Subtask5);
DeclareTask(CPU2Task5Subtask10);
DeclareTask(CPU2Task5Subtask14);
DeclareTask(CPU3Task4Subtask2);
DeclareTask(CPU4Task2Subtask0);
DeclareTask(CPU4Task2Subtask7);
DeclareTask(CPU4Task2Subtask12);
DeclareTask(CPU5Task0Subtask9);
DeclareTask(CPU5Task0Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 195); // 0
  ActivateTask(CPU5Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 40); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 61); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 61); // 0
  SetEvent(CPU0Task1Subtask11,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  ActivateTask(CPU4Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 187); // 0
  ActivateTask(CPU0Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 199); // 0
  ActivateTask(CPU0Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 13); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  ActivateTask(CPU1Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 9); // 0
  SetEvent(CPU2Task5Subtask14,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 88); // 0
  SetEvent(CPU5Task0Subtask13,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 43); // 0
  ActivateTask(CPU2Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  ActivateTask(CPU2Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 180); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 140); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 174); // 0
  SetEvent(CPU0Task1Subtask6,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 47); // 0
  ActivateTask(CPU2Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 155); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 89); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 59); // 0
  SetEvent(CPU2Task5Subtask3,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 163); // 0
  ActivateTask(CPU4Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 86); // 0
  ActivateTask(CPU4Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 196); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  TerminateTask();

}
