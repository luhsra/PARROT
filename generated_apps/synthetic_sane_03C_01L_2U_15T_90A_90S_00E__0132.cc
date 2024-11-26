#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask2);
DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU0Task1Subtask8);
DeclareTask(CPU0Task1Subtask12);
DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU0Task3Subtask3);
DeclareTask(CPU0Task3Subtask4);
DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU0Task3Subtask13);
DeclareTask(CPU1Task0Subtask14);
DeclareTask(CPU2Task2Subtask11);
DeclareTask(CPU2Task4Subtask7);
DeclareTask(CPU2Task5Subtask0);
DeclareTask(CPU2Task5Subtask9);
DeclareTask(CPU2Task5Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 102); // 0
  ActivateTask(CPU0Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 126); // 0
  ActivateTask(CPU0Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  ActivateTask(CPU0Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 176); // 0
  ActivateTask(CPU0Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 60); // 0
  ActivateTask(CPU0Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 172); // 0
  ActivateTask(CPU0Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 50); // 0
  ActivateTask(CPU0Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 150); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 57); // 0
  ActivateTask(CPU2Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 114); // 0
  ActivateTask(CPU2Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 4); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 112); // 0
  TerminateTask();

}
