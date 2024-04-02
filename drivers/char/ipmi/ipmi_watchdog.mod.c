#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0x58a1b98b, "param_get_int" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x28cde093, "no_llseek" },
	{ 0xcc6f4a0c, "ipmi_smi_watcher_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x2e39c545, "ipmi_smi_watcher_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x77bc13a0, "strim" },
	{ 0x9166fada, "strncpy" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0x9a8a0ca3, "__register_nmi_handler" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf5531bea, "ipmi_poll_interface" },
	{ 0xb9ff77a, "param_set_int" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x754d539c, "strlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd1f579d0, "ipmi_free_recv_msg" },
	{ 0x7c1372e8, "panic" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0x89a5279a, "ipmi_get_version" },
	{ 0xc4d9f382, "ipmi_create_user" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4bb8e67e, "ipmi_request_supply_msgs" },
	{ 0x29361773, "complete" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "A297A430EDD8081AB1584E7");
MODULE_INFO(rhelversion, "8.0");
