#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask10);
DeclareTask(CPU0Task2Subtask11);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask5);
DeclareTask(CPU0Task5Subtask9);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task4Subtask3);
DeclareTask(CPU2Task0Subtask6);
DeclareTask(CPU2Task0Subtask7);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU2Task1Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 61); // 0
  ActivateTask(CPU0Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 159); // 0
  ActivateTask(CPU0Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 65); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 28); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 188); // 0
  ActivateTask(CPU0Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 111); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 27); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 164); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 46); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 116); // 0
  ActivateTask(CPU0Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 93); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 18); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 19); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 2); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 139); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 20); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 75); // 0
  ActivateTask(CPU2Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 179); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 3); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 12); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 136); // 0
  ActivateTask(CPU2Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 56); // 0
  ActivateTask(CPU2Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 164); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 189); // 0
  TerminateTask();

}
