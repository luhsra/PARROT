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


DeclareTask(CPU0Task1Subtask3);
DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU0Task3Subtask9);
DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask8);
DeclareTask(CPU1Task0Subtask13);
DeclareTask(CPU1Task2Subtask0);
DeclareTask(CPU1Task2Subtask1);
DeclareTask(CPU1Task2Subtask2);
DeclareTask(CPU1Task2Subtask11);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU1Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 41); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 9); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 186); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 157); // 0
  ActivateTask(CPU0Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 119); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 76); // 0
  SetEvent(CPU0Task4Subtask8,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 91); // 0
  ActivateTask(CPU0Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  SetEvent(CPU0Task3Subtask5,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 92); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 67); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 166); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 20); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 46); // 0
  ActivateTask(CPU1Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 130); // 0
  ActivateTask(CPU1Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 92); // 0
  ActivateTask(CPU1Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 93); // 0
  SetEvent(CPU1Task5Subtask14,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 126); // 0
  ActivateTask(CPU1Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 98); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 48); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 29); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 118); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 8); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  SetEvent(CPU0Task1Subtask3,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 62); // 0
  SetEvent(CPU1Task5Subtask6,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  ActivateTask(CPU0Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 172); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 35); // 0
  ActivateTask(CPU1Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 84); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 50); // 0
  TerminateTask();

}
