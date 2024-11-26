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


DeclareTask(CPU0Task5Subtask7);
DeclareTask(CPU0Task5Subtask8);
DeclareTask(CPU1Task1Subtask4);
DeclareTask(CPU1Task1Subtask9);
DeclareTask(CPU1Task1Subtask12);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU2Task4Subtask1);
DeclareTask(CPU2Task4Subtask14);
DeclareTask(CPU3Task3Subtask3);
DeclareTask(CPU3Task3Subtask5);
DeclareTask(CPU3Task3Subtask6);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask2);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task2Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask10 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 42); // 0
  ActivateTask(CPU0Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 52); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 74); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 105); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 33); // 0
  ActivateTask(CPU1Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 58); // 0
  SetEvent(CPU4Task0Subtask0,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 75); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 68); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 173); // 0
  ActivateTask(CPU1Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 65); // 0
  SetEvent(CPU1Task1Subtask12,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 34); // 0
  ActivateTask(CPU4Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 59); // 0
  SetEvent(CPU4Task0Subtask11,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 149); // 0
  ActivateTask(CPU2Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 9); // 0
  SetEvent(CPU1Task1Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 186); // 0
  ActivateTask(CPU3Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 200); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 103); // 0
  ActivateTask(CPU3Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 56); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 44); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 143); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 51); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 27); // 0
  SetEvent(CPU3Task3Subtask6,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 48); // 0
  TerminateTask();

}
