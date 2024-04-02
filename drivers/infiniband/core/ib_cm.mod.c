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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xec331ff9, "ib_find_cached_gid" },
	{ 0x72812a5d, "ib_create_ah_from_wc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x3d2a971b, "ib_modify_mad" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe9e8c57e, "ib_register_mad_agent" },
	{ 0x406653b8, "ib_free_recv_mad" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xce214081, "ib_get_cached_gid" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x86efc71c, "ib_free_send_mad" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9aadd701, "rdma_destroy_ah" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xed57dd17, "idr_alloc_cyclic" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x71c0e774, "kobject_init_and_add" },
	{ 0x2097a6fc, "ib_get_client_data" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0x2df52479, "device_create" },
	{ 0xd5aa72e3, "ib_get_cached_pkey" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xa6aaa67f, "ib_set_client_data" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6afbc366, "ib_create_send_mad" },
	{ 0x2a0a66d5, "ib_post_send_mad" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0x32c5fa9d, "ib_unregister_mad_agent" },
	{ 0x8f5144a6, "ib_register_client" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaf8d9f6d, "ib_find_cached_pkey" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x834bb7c5, "ib_init_ah_attr_from_wc" },
	{ 0x41a8670e, "rdma_create_ah" },
	{ 0x56411c72, "ib_cancel_mad" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc215ff46, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9d05dcd5, "ib_init_ah_attr_from_path" },
	{ 0xdf30c245, "idr_find" },
	{ 0x18e7ea17, "ib_unregister_client" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "F003487A5F0B69D66F09772");
MODULE_INFO(rhelversion, "8.0");
