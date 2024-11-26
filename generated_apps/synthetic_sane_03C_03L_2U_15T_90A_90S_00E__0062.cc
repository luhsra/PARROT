#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask0);
DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task1Subtask3);
DeclareTask(CPU0Task1Subtask12);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task4Subtask9);
DeclareTask(CPU2Task2Subtask1);
DeclareTask(CPU2Task2Subtask5);
DeclareTask(CPU2Task2Subtask8);
DeclareTask(CPU2Task2Subtask10);
DeclareTask(CPU2Task2Subtask13);
DeclareTask(CPU2Task5Subtask2);
DeclareTask(CPU2Task5Subtask4);
DeclareTask(CPU2Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 45); // 0
  ActivateTask(CPU2Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 60); // 0
  ActivateTask(CPU0Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 124); // 0
  ActivateTask(CPU0Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 14); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 179); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 24); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 179); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 28); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 36); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 139); // 0
  ActivateTask(CPU2Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 189); // 0
  ActivateTask(CPU2Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 187); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 58); // 0
  ActivateTask(CPU2Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 57); // 0
  ActivateTask(CPU2Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 187); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 70); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 19); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 179); // 0
  ActivateTask(CPU2Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 51); // 0
  ActivateTask(CPU2Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 143); // 0
  TerminateTask();

}
