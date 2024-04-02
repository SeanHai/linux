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
	{ 0x2cec6038, "kobject_put" },
	{ 0xf41e5ff6, "cdev_set_parent" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa9c2cec5, "kobject_get" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6a8db397, "cdev_init" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe9e8c57e, "ib_register_mad_agent" },
	{ 0x406653b8, "ib_free_recv_mad" },
	{ 0x28cde093, "no_llseek" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xafab167e, "kobject_set_name" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x5d4cc2e5, "ib_get_rmpp_segment" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x86efc71c, "ib_free_send_mad" },
	{ 0x24176b66, "rdma_create_user_ah" },
	{ 0x613b1e2e, "ib_is_mad_class_rmpp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x9aadd701, "rdma_destroy_ah" },
	{ 0xf7d6636f, "current_task" },
	{ 0x14e4112, "down_trylock" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf2532d24, "ib_mad_kernel_rmpp_agent" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2df52479, "device_create" },
	{ 0xa6aaa67f, "ib_set_client_data" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6afbc366, "ib_create_send_mad" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2a0a66d5, "ib_post_send_mad" },
	{ 0x4e155af0, "ib_response_mad" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x32c5fa9d, "ib_unregister_mad_agent" },
	{ 0x8f5144a6, "ib_register_client" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x834bb7c5, "ib_init_ah_attr_from_wc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x554d4c9b, "class_create_file_ns" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc215ff46, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x217548d3, "kobject_init" },
	{ 0xcf2a6966, "up" },
	{ 0xa047947, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x787ccc4c, "ib_get_mad_data_offset" },
	{ 0x369992c3, "show_class_attr_string" },
	{ 0x18e7ea17, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "94B4D3528A339554ABA1F60");
MODULE_INFO(rhelversion, "8.0");
