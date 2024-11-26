#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask0);
DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU1Task4Subtask3);
DeclareTask(CPU1Task4Subtask13);
DeclareTask(CPU2Task3Subtask5);
DeclareTask(CPU3Task5Subtask6);
DeclareTask(CPU3Task5Subtask8);
DeclareTask(CPU4Task2Subtask2);
DeclareTask(CPU4Task2Subtask9);
DeclareTask(CPU4Task2Subtask12);
DeclareTask(CPU4Task2Subtask14);
DeclareTask(CPU5Task0Subtask4);
DeclareTask(CPU5Task0Subtask7);
DeclareTask(CPU5Task0Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 93); // 0
  ActivateTask(CPU0Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 79); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 69); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 35); // 0
  ActivateTask(CPU1Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 41); // 0
  ActivateTask(CPU3Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 121); // 0
  ActivateTask(CPU4Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 76); // 0
  ActivateTask(CPU4Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 41); // 0
  ActivateTask(CPU4Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 58); // 0
  ActivateTask(CPU5Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 176); // 0
  ActivateTask(CPU5Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 174); // 0
  ActivateTask(CPU0Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 143); // 0
  ActivateTask(CPU3Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 124); // 0
  TerminateTask();

}
