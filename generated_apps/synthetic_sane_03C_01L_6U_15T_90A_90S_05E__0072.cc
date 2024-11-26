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


DeclareTask(CPU0Task5Subtask0);
DeclareTask(CPU0Task5Subtask7);
DeclareTask(CPU0Task5Subtask9);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task0Subtask2);
DeclareTask(CPU1Task0Subtask11);
DeclareTask(CPU1Task2Subtask6);
DeclareTask(CPU1Task2Subtask10);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU1Task4Subtask1);
DeclareTask(CPU1Task4Subtask13);
DeclareTask(CPU2Task1Subtask3);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU2Task3Subtask4);
DeclareTask(CPU2Task3Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 183); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 134); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 143); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 18); // 0
  ActivateTask(CPU0Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 134); // 0
  ActivateTask(CPU0Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 186); // 0
  ActivateTask(CPU1Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 119); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 92); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 91); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 123); // 0
  ActivateTask(CPU1Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  SetEvent(CPU0Task5Subtask7,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 67); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 117); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 103); // 0
  ActivateTask(CPU1Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 166); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 20); // 0
  SetEvent(CPU1Task4Subtask1,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 46); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 65); // 0
  ActivateTask(CPU2Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 145); // 0
  ActivateTask(CPU2Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 98); // 0
  SetEvent(CPU1Task2Subtask10,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 168); // 0
  SetEvent(CPU1Task2Subtask12,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 99); // 0
  ActivateTask(CPU1Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 65); // 0
  ActivateTask(CPU0Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 75); // 0
  SetEvent(CPU0Task5Subtask0,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 15); // 0
  TerminateTask();

}
