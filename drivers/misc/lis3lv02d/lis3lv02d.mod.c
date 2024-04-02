#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xefed9dd7, "input_unregister_polled_device" },
	{ 0x58a1b98b, "param_get_int" },
	{ 0xc1234e41, "pm_runtime_barrier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x28cde093, "no_llseek" },
	{ 0x3df9e726, "input_register_polled_device" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xb9ff77a, "param_set_int" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xfe7843b, "input_event" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6bddef80, "misc_register" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x3ed5b2b6, "input_free_polled_device" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x739eb56e, "pm_schedule_suspend" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1c504203, "input_allocate_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";


MODULE_INFO(srcversion, "1A2F05818D6B287041A278C");
MODULE_INFO(rhelversion, "8.0");
