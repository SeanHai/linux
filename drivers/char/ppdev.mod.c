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
	{ 0x15a89a18, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa047947, "class_destroy" },
	{ 0x56e402f9, "__parport_register_driver" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xcb7cfa12, "parport_write" },
	{ 0x2df52479, "device_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6a1e5ef1, "parport_read" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7d6636f, "current_task" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0xeb522221, "parport_set_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda28feb0, "parport_put_port" },
	{ 0x9be4fb1a, "parport_register_dev_model" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xa441d18, "parport_find_number" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x97c3aef6, "parport_claim_or_block" },
	{ 0xaff99d8e, "parport_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xe310d55, "parport_unregister_device" },
	{ 0xba4300d2, "parport_negotiate" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "6AA92A7FACAC760AD050869");
MODULE_INFO(rhelversion, "8.0");
