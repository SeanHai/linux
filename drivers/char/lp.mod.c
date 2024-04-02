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
	{ 0x103b0514, "param_ops_charp" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xe310d55, "parport_unregister_device" },
	{ 0x15a89a18, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa047947, "class_destroy" },
	{ 0x56e402f9, "__parport_register_driver" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a921311, "strncmp" },
	{ 0x1000e51, "schedule" },
	{ 0xcb7cfa12, "parport_write" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6a1e5ef1, "parport_read" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xeb522221, "parport_set_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0x2df52479, "device_create" },
	{ 0xcbb92e21, "parport_register_device" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x27e1a049, "printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xba4300d2, "parport_negotiate" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaff99d8e, "parport_release" },
	{ 0x97c3aef6, "parport_claim_or_block" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "BA5899065B0B852C6D2B23C");
MODULE_INFO(rhelversion, "8.0");
