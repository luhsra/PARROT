#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask13);
DeclareTask(CPU0Task1Subtask14);
DeclareTask(CPU0Task5Subtask1);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask8);
DeclareTask(CPU1Task0Subtask0);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU1Task0Subtask11);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU2Task3Subtask2);
DeclareTask(CPU2Task3Subtask9);
DeclareTask(CPU2Task4Subtask6);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 94); // 0
  ActivateTask(CPU0Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 110); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 167); // 0
  ActivateTask(CPU0Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 123); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 10); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 11); // 0
  ActivateTask(CPU1Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 146); // 0
  ActivateTask(CPU0Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 139); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 186); // 0
  ActivateTask(CPU1Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 30); // 0
  ActivateTask(CPU0Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 22); // 0
  ActivateTask(CPU1Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 11); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 123); // 0
  ActivateTask(CPU1Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 125); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 19); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 161); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 21); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 80); // 0
  ActivateTask(CPU2Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 159); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 141); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 12); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 84); // 0
  TerminateTask();

}
