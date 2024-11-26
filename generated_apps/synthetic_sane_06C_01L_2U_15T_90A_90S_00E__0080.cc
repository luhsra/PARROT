#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask6);
DeclareTask(CPU0Task5Subtask8);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task3Subtask0);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task3Subtask4);
DeclareTask(CPU1Task3Subtask9);
DeclareTask(CPU2Task0Subtask1);
DeclareTask(CPU2Task0Subtask3);
DeclareTask(CPU2Task0Subtask13);
DeclareTask(CPU3Task1Subtask5);
DeclareTask(CPU3Task1Subtask14);
DeclareTask(CPU4Task4Subtask10);
DeclareTask(CPU4Task4Subtask11);
DeclareTask(CPU5Task2Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 30); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 15); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 41); // 0
  ActivateTask(CPU0Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 163); // 0
  ActivateTask(CPU1Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 17); // 0
  ActivateTask(CPU1Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 133); // 0
  ActivateTask(CPU1Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 178); // 0
  ActivateTask(CPU2Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 178); // 0
  ActivateTask(CPU0Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  ActivateTask(CPU2Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 174); // 0
  ActivateTask(CPU3Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 11); // 0
  ActivateTask(CPU4Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 158); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 23); // 0
  TerminateTask();

}
