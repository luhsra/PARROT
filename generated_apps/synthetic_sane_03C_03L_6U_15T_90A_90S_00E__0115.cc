#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU1Task5Subtask12);
DeclareTask(CPU2Task1Subtask5);
DeclareTask(CPU2Task2Subtask6);
DeclareTask(CPU2Task2Subtask9);
DeclareTask(CPU2Task2Subtask13);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU2Task4Subtask7);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 95); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 7); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 84); // 0
  ActivateTask(CPU0Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 174); // 0
  ActivateTask(CPU1Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 141); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 187); // 0
  ActivateTask(CPU1Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 177); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 10); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 15); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 19); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 194); // 0
  ActivateTask(CPU1Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 38); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 20); // 0
  ActivateTask(CPU2Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 89); // 0
  ActivateTask(CPU2Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 111); // 0
  ActivateTask(CPU0Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 180); // 0
  ActivateTask(CPU2Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 69); // 0
  ActivateTask(CPU2Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 114); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 122); // 0
  TerminateTask();

}
