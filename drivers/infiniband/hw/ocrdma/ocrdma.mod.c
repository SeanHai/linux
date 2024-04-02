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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x4e2e10d2, "be_roce_mcc_cmd" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x754d539c, "strlen" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0xaf273372, "vlan_dev_vlan_id" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x24e3b03c, "be_roce_register_driver" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce214081, "ib_get_cached_gid" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xfb578fc5, "memset" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x9b7dd98c, "ib_query_port" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xaf309ec7, "ib_umem_get" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x787b953, "idr_alloc" },
	{ 0x3727b08a, "be_roce_unregister_driver" },
	{ 0x9a910d01, "simple_open" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdc8d485c, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6e949eed, "ib_umem_page_count" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x4bf4d99d, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2938951, "ib_modify_qp_is_ok" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x28318305, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd1525896, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=be2net,ib_core";


MODULE_INFO(srcversion, "7FB8A1AE1E73B4E7223A023");
MODULE_INFO(rhelversion, "8.0");
