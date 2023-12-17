#include <linux/init.h> /* Needed for the macros */ 
#include <linux/module.h> /* Needed by all modules */ 
#include <linux/printk.h> /* Needed for pr_info() */ 

static int __init init_tpl_module(void)
{
    printk(KERN_INFO "Hello, world 4\n");
    return 0;
}

static void __exit exit_tpl_module(void)
{
    printk(KERN_INFO "Goodbye, world 4\n");
}

module_init(init_tpl_module);
module_exit(exit_tpl_module);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("lev");    /* Who wrote this module? */
MODULE_DESCRIPTION("Core module pattern"); /* What does this module do */

