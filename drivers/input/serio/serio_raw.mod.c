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
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x56484ccc, "serio_unregister_driver" },
	{ 0xd4a683b9, "__serio_register_driver" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x947f7953, "serio_close" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6bddef80, "misc_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe8de29eb, "mutex_lock_killable" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x1c2af421, "serio_open" },
	{ 0x85ffabba, "get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x28318305, "snprintf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0c86c05, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "02A37488E1A00B37159CBA8");
MODULE_INFO(rhelversion, "8.0");
