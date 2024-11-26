#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU1Task2Subtask0);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU2Task1Subtask11);
DeclareTask(CPU3Task5Subtask3);
DeclareTask(CPU3Task5Subtask9);
DeclareTask(CPU3Task5Subtask10);
DeclareTask(CPU4Task4Subtask1);
DeclareTask(CPU4Task4Subtask5);
DeclareTask(CPU5Task3Subtask4);
DeclareTask(CPU5Task3Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 28); // 0
  ActivateTask(CPU4Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 57); // 0
  ActivateTask(CPU0Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 63); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 31); // 0
  ActivateTask(CPU1Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 115); // 0
  ActivateTask(CPU1Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 144); // 0
  ActivateTask(CPU2Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 86); // 0
  ActivateTask(CPU2Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 7); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 36); // 0
  ActivateTask(CPU3Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 65); // 0
  ActivateTask(CPU3Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 91); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 19); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 94); // 0
  ActivateTask(CPU5Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 197); // 0
  TerminateTask();

}
