#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU0Task1Subtask13);
DeclareTask(CPU0Task2Subtask1);
DeclareTask(CPU0Task2Subtask2);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU1Task3Subtask14);
DeclareTask(CPU1Task4Subtask0);
DeclareTask(CPU1Task4Subtask3);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU1Task5Subtask4);
DeclareTask(CPU1Task5Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 87); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 91); // 0
  ActivateTask(CPU0Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 175); // 0
  ActivateTask(CPU0Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 84); // 0
  ActivateTask(CPU0Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  ActivateTask(CPU0Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 104); // 0
  ActivateTask(CPU1Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 37); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 8); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 115); // 0
  ActivateTask(CPU0Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 18); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 12); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 192); // 0
  ActivateTask(CPU1Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 68); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 30); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 12); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 84); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 25); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 70); // 0
  TerminateTask();

}