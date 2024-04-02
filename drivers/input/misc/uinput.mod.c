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
	{ 0x28cde093, "no_llseek" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x6bddef80, "misc_register" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xfe7843b, "input_event" },
	{ 0xf751aea, "input_event_from_user" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xcde73e52, "input_ff_destroy" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0x5494c2, "input_alloc_absinfo" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x754d539c, "strlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x9d443d45, "input_ff_create" },
	{ 0x27e1a049, "printk" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5d12e48f, "input_event_to_user" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xaf6ae696, "kstrndup" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf7d6636f, "current_task" },
	{ 0xcb2a6282, "input_ff_flush" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x29361773, "complete" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EDE21784EB561084700A49E");
MODULE_INFO(rhelversion, "8.0");
