#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask2);
DeclareTask(CPU1Task0Subtask7);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU2Task3Subtask4);
DeclareTask(CPU2Task3Subtask10);
DeclareTask(CPU2Task3Subtask12);
DeclareTask(CPU2Task3Subtask13);
DeclareTask(CPU3Task5Subtask9);
DeclareTask(CPU4Task1Subtask3);
DeclareTask(CPU4Task1Subtask5);
DeclareTask(CPU4Task1Subtask6);
DeclareTask(CPU4Task1Subtask14);
DeclareTask(CPU5Task4Subtask1);
DeclareTask(CPU5Task4Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 162); // 0
  ActivateTask(CPU0Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 39); // 0
  ActivateTask(CPU1Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 125); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 25); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 60); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 63); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 47); // 0
  ActivateTask(CPU2Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 80); // 0
  ActivateTask(CPU2Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 172); // 0
  ActivateTask(CPU2Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 95); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 28); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 60); // 0
  ActivateTask(CPU4Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 32); // 0
  ActivateTask(CPU4Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 64); // 0
  ActivateTask(CPU4Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 150); // 0
  ActivateTask(CPU5Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 87); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 25); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 155); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 14); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 73); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 176); // 0
  TerminateTask();

}
