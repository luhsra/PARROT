#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task2Subtask4);
DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task3Subtask0);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU1Task5Subtask13);
DeclareTask(CPU1Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 95); // 0
  ActivateTask(CPU0Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 67); // 0
  ActivateTask(CPU0Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 31); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 23); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 163); // 0
  ActivateTask(CPU0Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 196); // 0
  ActivateTask(CPU0Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 99); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 17); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 2); // 0
  ActivateTask(CPU1Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 138); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 24); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 51); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 19); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 139); // 0
  ActivateTask(CPU0Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 166); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 133); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 73); // 0
  ActivateTask(CPU1Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 31); // 0
  ActivateTask(CPU0Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 127); // 0
  TerminateTask();

}