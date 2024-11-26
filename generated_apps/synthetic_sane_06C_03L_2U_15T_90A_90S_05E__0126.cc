#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task2Subtask1);
DeclareTask(CPU0Task2Subtask3);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU1Task3Subtask4);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU2Task5Subtask10);
DeclareTask(CPU3Task4Subtask5);
DeclareTask(CPU3Task4Subtask7);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask2);
DeclareTask(CPU4Task0Subtask9);
DeclareTask(CPU4Task0Subtask13);
DeclareTask(CPU4Task0Subtask14);
DeclareTask(CPU5Task1Subtask8);
DeclareTask(CPU5Task1Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 113); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 35); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 21); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 198); // 0
  ActivateTask(CPU0Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 31); // 0
  ActivateTask(CPU0Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 30); // 0
  SetEvent(CPU4Task0Subtask0,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 60); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 113); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 198); // 0
  ActivateTask(CPU1Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 50); // 0
  SetEvent(CPU1Task3Subtask4,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 140); // 0
  ActivateTask(CPU5Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  SetEvent(CPU5Task1Subtask11,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 52); // 0
  ActivateTask(CPU3Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 58); // 0
  ActivateTask(CPU4Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 15); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 61); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 105); // 0
  SetEvent(CPU0Task2Subtask1,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 140); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 174); // 0
  ActivateTask(CPU4Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 88); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 29); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 98); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 10); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 155); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 38); // 0
  SetEvent(CPU4Task0Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 150); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 176); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 26); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 138); // 0
  TerminateTask();

}
