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


DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task0Subtask6);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU1Task0Subtask14);
DeclareTask(CPU1Task3Subtask0);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask11);
DeclareTask(CPU1Task4Subtask2);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU2Task1Subtask1);
DeclareTask(CPU2Task1Subtask4);
DeclareTask(CPU2Task1Subtask13);
DeclareTask(CPU2Task2Subtask7);
DeclareTask(CPU2Task2Subtask8);
DeclareTask(CPU2Task2Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 171); // 0
  SetEvent(CPU1Task3Subtask0,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 150); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 36); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 101); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 10); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 153); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 191); // 0
  ActivateTask(CPU2Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  ActivateTask(CPU1Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 13); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 89); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 6); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 79); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 70); // 0
  ActivateTask(CPU1Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 123); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 45); // 0
  ActivateTask(CPU1Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 32); // 0
  SetEvent(CPU1Task0Subtask6,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 12); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 92); // 0
  ActivateTask(CPU2Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 195); // 0
  ActivateTask(CPU1Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 62); // 0
  SetEvent(CPU2Task1Subtask13,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 188); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 120); // 0
  ActivateTask(CPU2Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 77); // 0
  ActivateTask(CPU2Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 20); // 0
  SetEvent(CPU2Task2Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 75); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 29); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 47); // 0
  ActivateTask(CPU1Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 53); // 0
  SetEvent(CPU1Task3Subtask11,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 60); // 0
  ActivateTask(CPU2Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 167); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 14); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 62); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 68); // 0
  TerminateTask();

}
