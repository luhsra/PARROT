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


DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU0Task3Subtask12);
DeclareTask(CPU0Task4Subtask3);
DeclareTask(CPU0Task4Subtask9);
DeclareTask(CPU1Task2Subtask0);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask4);
DeclareTask(CPU1Task5Subtask5);
DeclareTask(CPU1Task5Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 21); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 41); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  ActivateTask(CPU0Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 99); // 0
  ActivateTask(CPU0Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  SetEvent(CPU0Task3Subtask12,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 131); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 22); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 70); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 114); // 0
  SetEvent(CPU0Task1Subtask10,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 166); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 122); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 183); // 0
  ActivateTask(CPU1Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 116); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 42); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 29); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 147); // 0
  ActivateTask(CPU0Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 110); // 0
  SetEvent(CPU0Task0Subtask8,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 5); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 108); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 53); // 0
  ActivateTask(CPU0Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 124); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 51); // 0
  SetEvent(CPU1Task5Subtask2,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 86); // 0
  ActivateTask(CPU0Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 196); // 0
  SetEvent(CPU0Task0Subtask11,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 70); // 0
  ActivateTask(CPU1Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 109); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 19); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 162); // 0
  ActivateTask(CPU0Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 7); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 21); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 169); // 0
  TerminateTask();

}
