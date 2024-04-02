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
	{ 0xda06546, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc74fbfc2, "i2c_for_each_dev" },
	{ 0xa047947, "class_destroy" },
	{ 0x86f210c2, "bus_register_notifier" },
	{ 0xc5dd2896, "i2c_bus_type" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x27e1a049, "printk" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x2df52479, "device_create" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x6a8db397, "cdev_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x91715312, "sprintf" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x28318305, "snprintf" },
	{ 0x852a25b3, "i2c_get_adapter" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xca0d7b63, "i2c_verify_client" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0x8ea83eb4, "i2c_adapter_type" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6a584776, "i2c_smbus_xfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xcecb4220, "i2c_put_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "77854BE4ED59C4307381C59");
MODULE_INFO(rhelversion, "8.0");
