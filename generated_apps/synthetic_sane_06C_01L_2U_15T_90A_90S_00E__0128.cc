#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask10);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task2Subtask6);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU2Task5Subtask0);
DeclareTask(CPU2Task5Subtask2);
DeclareTask(CPU2Task5Subtask11);
DeclareTask(CPU3Task0Subtask3);
DeclareTask(CPU3Task0Subtask13);
DeclareTask(CPU4Task1Subtask4);
DeclareTask(CPU4Task1Subtask14);
DeclareTask(CPU5Task3Subtask1);
DeclareTask(CPU5Task3Subtask5);
DeclareTask(CPU5Task3Subtask8);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 41); // 0
  ActivateTask(CPU0Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 37); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 130); // 0
  ActivateTask(CPU1Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 128); // 0
  ActivateTask(CPU1Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 140); // 0
  ActivateTask(CPU2Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 42); // 0
  ActivateTask(CPU4Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  ActivateTask(CPU2Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 112); // 0
  ActivateTask(CPU3Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 148); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 73); // 0
  ActivateTask(CPU5Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 117); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 153); // 0
  ActivateTask(CPU5Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 170); // 0
  TerminateTask();

}
