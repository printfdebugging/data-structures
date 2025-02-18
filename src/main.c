#include <stdio.h>

#include "linked_list.h"

int main() {
    struct linked_list_node* head = NULL;
    for (int i = 0; i < 4; ++i) {
        struct linked_list_node* node = linked_list_create_empty_node(i);
        head = linked_list_append_node(head, node);
    }

    struct linked_list_node* node = linked_list_create_empty_node(-1);
    head = linked_list_insert_node(head, node, 6);

    linked_list_print(head);
    linked_list_free(head);
}

// this is a better example :)
/*! @brief Initializes the GLFW library.
 *
 *  This function initializes the GLFW library.  Before most GLFW functions can
 *  be used, GLFW must be initialized, and before an application terminates GLFW
 *  should be terminated in order to free any resources allocated during or
 *  after initialization.
 *
 *  If this function fails, it calls @ref glfwTerminate before returning.  If it
 *  succeeds, you should call @ref glfwTerminate before the application exits.
 *
 *  Additional calls to this function after successful initialization but before
 *  termination will return `GLFW_TRUE` immediately.
 *
 *  The @ref GLFW_PLATFORM init hint controls which platforms are considered during
 *  initialization.  This also depends on which platforms the library was compiled to
 *  support.
 *
 *  @return `GLFW_TRUE` if successful, or `GLFW_FALSE` if an
 *  [error](@ref error_handling) occurred.
 *
 *  @errors Possible errors include @ref GLFW_PLATFORM_UNAVAILABLE and @ref
 *  GLFW_PLATFORM_ERROR.
 *
 *  @remark @macos This function will change the current directory of the
 *  application to the `Contents/Resources` subdirectory of the application's
 *  bundle, if present.  This can be disabled with the @ref
 *  GLFW_COCOA_CHDIR_RESOURCES init hint.
 *
 *  @remark @macos This function will create the main menu and dock icon for the
 *  application.  If GLFW finds a `MainMenu.nib` it is loaded and assumed to
 *  contain a menu bar.  Otherwise a minimal menu bar is created manually with
 *  common commands like Hide, Quit and About.  The About entry opens a minimal
 *  about dialog with information from the application's bundle.  The menu bar
 *  and dock icon can be disabled entirely with the @ref GLFW_COCOA_MENUBAR init
 *  hint.
 *
 *  @remark __Wayland, X11:__ If the library was compiled with support for both
 *  Wayland and X11, and the @ref GLFW_PLATFORM init hint is set to
 *  `GLFW_ANY_PLATFORM`, the `XDG_SESSION_TYPE` environment variable affects
 *  which platform is picked.  If the environment variable is not set, or is set
 *  to something other than `wayland` or `x11`, the regular detection mechanism
 *  will be used instead.
 *
 *  @remark @x11 This function will set the `LC_CTYPE` category of the
 *  application locale according to the current environment if that category is
 *  still "C".  This is because the "C" locale breaks Unicode text input.
 *
 *  @thread_safety This function must only be called from the main thread.
 *
 *  @sa @ref intro_init
 *  @sa @ref glfwInitHint
 *  @sa @ref glfwInitAllocator
 *  @sa @ref glfwTerminate
 *
 *  @since Added in version 1.0.
 *
 *  @ingroup init
 */
