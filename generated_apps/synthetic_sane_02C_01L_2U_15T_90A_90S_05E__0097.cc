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


DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task2Subtask2);
DeclareTask(CPU0Task2Subtask5);
DeclareTask(CPU1Task1Subtask0);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU1Task3Subtask8);
DeclareTask(CPU1Task3Subtask12);
DeclareTask(CPU1Task3Subtask14);
DeclareTask(CPU1Task4Subtask7);
DeclareTask(CPU1Task4Subtask10);
DeclareTask(CPU1Task4Subtask11);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU1Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 20); // 0
  ActivateTask(CPU0Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 173); // 0
  ActivateTask(CPU0Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 183); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  ActivateTask(CPU1Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 82); // 0
  SetEvent(CPU1Task3Subtask6,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 108); // 0
  ActivateTask(CPU1Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  SetEvent(CPU1Task3Subtask12,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 84); // 0
  ActivateTask(CPU0Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 55); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  ActivateTask(CPU1Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 175); // 0
  ActivateTask(CPU1Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 124); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 57); // 0
  SetEvent(CPU0Task0Subtask4,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 158); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 185); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 100); // 0
  ActivateTask(CPU1Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 68); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 136); // 0
  SetEvent(CPU0Task0Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 144); // 0
  SetEvent(CPU1Task4Subtask10,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 75); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 32); // 0
  ActivateTask(CPU1Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 100); // 0
  TerminateTask();

}