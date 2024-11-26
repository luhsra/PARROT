#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask0);
DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU0Task1Subtask9);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU2Task0Subtask4);
DeclareTask(CPU2Task0Subtask8);
DeclareTask(CPU2Task0Subtask13);
DeclareTask(CPU3Task5Subtask3);
DeclareTask(CPU3Task5Subtask11);
DeclareTask(CPU3Task5Subtask12);
DeclareTask(CPU3Task5Subtask14);
DeclareTask(CPU4Task3Subtask5);
DeclareTask(CPU5Task2Subtask1);
DeclareTask(CPU5Task2Subtask2);
DeclareTask(CPU5Task2Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 150); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 176); // 0
  ActivateTask(CPU0Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 24); // 0
  ActivateTask(CPU0Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 193); // 0
  ActivateTask(CPU2Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 35); // 0
  ActivateTask(CPU2Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 11); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 60); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 28); // 0
  ActivateTask(CPU3Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 121); // 0
  ActivateTask(CPU3Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 118); // 0
  ActivateTask(CPU3Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 111); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 46); // 0
  ActivateTask(CPU5Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 116); // 0
  ActivateTask(CPU5Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 62); // 0
  TerminateTask();

}
