#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask2);
DeclareTask(CPU0Task1Subtask13);
DeclareTask(CPU0Task1Subtask14);
DeclareTask(CPU0Task2Subtask4);
DeclareTask(CPU0Task2Subtask10);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU0Task3Subtask7);
DeclareTask(CPU1Task0Subtask1);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task4Subtask11);
DeclareTask(CPU1Task5Subtask0);
DeclareTask(CPU1Task5Subtask3);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask3 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 62); // 0
  ActivateTask(CPU0Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 45); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 18); // 0
  ActivateTask(CPU0Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 172); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 29); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 157); // 0
  ActivateTask(CPU0Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 183); // 0
  ActivateTask(CPU0Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 154); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 76); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 7); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 112); // 0
  ActivateTask(CPU1Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 19); // 0
  ActivateTask(CPU1Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 173); // 0
  ActivateTask(CPU1Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 37); // 0
  ActivateTask(CPU1Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 33); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 29); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 122); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 44); // 0
  ActivateTask(CPU1Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 178); // 0
  TerminateTask();

}
