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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6a8db397, "cdev_init" },
	{ 0xea2b701b, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xbab8cdfb, "mtd_block_isbad" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdf36319, "seq_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x41715c18, "seq_puts" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x64ec0d83, "mtd_get_device_size" },
	{ 0x28cde093, "no_llseek" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xd1306c13, "blocking_notifier_chain_unregister" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa28792d4, "mtd_write" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91185511, "down_read" },
	{ 0x3a966ef, "down_write_trylock" },
	{ 0xd33af230, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0xbd6642d9, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xd257960c, "device_register" },
	{ 0xf7d6636f, "current_task" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x204aeea3, "mtd_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x8de80e69, "put_mtd_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb672fc65, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x373db350, "kstrtoint" },
	{ 0x9a910d01, "simple_open" },
	{ 0x85142f62, "up_write" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x65baf559, "down_write" },
	{ 0xfa09be65, "mtd_block_markbad" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe8200fae, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0xa0ef795, "cdev_device_add" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xced7b2, "get_mtd_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67d83e37, "blocking_notifier_chain_register" },
	{ 0x88531246, "path_put" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xec572a3, "get_mtd_device_nm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x85ffabba, "get_device" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x291eb36, "seq_lseek" },
	{ 0xa9bd2676, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x551be51f, "device_initialize" },
	{ 0xca9360b5, "rb_next" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x9a6b3206, "cdev_device_del" },
	{ 0x28318305, "snprintf" },
	{ 0xb893b626, "seq_release" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x874dd0d1, "vfs_getattr" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x760a0f4f, "yield" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "14C8E81AB0E804BCBD0A6BC");
MODULE_INFO(rhelversion, "8.0");
