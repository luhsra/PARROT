#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask2);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU2Task1Subtask3);
DeclareTask(CPU2Task1Subtask7);
DeclareTask(CPU2Task1Subtask9);
DeclareTask(CPU2Task1Subtask13);
DeclareTask(CPU3Task3Subtask4);
DeclareTask(CPU3Task3Subtask10);
DeclareTask(CPU4Task2Subtask5);
DeclareTask(CPU4Task2Subtask14);
DeclareTask(CPU5Task0Subtask0);
DeclareTask(CPU5Task0Subtask1);
DeclareTask(CPU5Task0Subtask8);
DeclareTask(CPU5Task0Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 39); // 0
  ActivateTask(CPU0Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 80); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 163); // 0
  ActivateTask(CPU3Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 186); // 0
  ActivateTask(CPU2Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 131); // 0
  ActivateTask(CPU2Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 57); // 0
  ActivateTask(CPU3Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 18); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 90); // 0
  ActivateTask(CPU2Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 34); // 0
  ActivateTask(CPU4Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 75); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  ActivateTask(CPU5Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 108); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 29); // 0
  ActivateTask(CPU5Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 6); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 161); // 0
  ActivateTask(CPU5Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 135); // 0
  TerminateTask();

}
