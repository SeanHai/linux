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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x41715c18, "seq_puts" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb42353bb, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xdeaed2ea, "sysfs_create_files" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x455d5a66, "lookup_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xea835d68, "bdi_alloc_node" },
	{ 0xd257960c, "device_register" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x877d2d80, "sget" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xb672fc65, "fixed_size_llseek" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2df52479, "device_create" },
	{ 0x787b953, "idr_alloc" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd11a8c36, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb23cc9a3, "bdi_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x2d2a14f0, "sysfs_remove_files" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x6d9c3e08, "bdi_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28318305, "snprintf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0xd63aa88f, "bdput" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x8507cb27, "generic_shutdown_super" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1997E05EE3DDFC12E219F5D");
MODULE_INFO(rhelversion, "8.0");
