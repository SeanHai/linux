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
	{ 0x58388972, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x41c99cea, "ib_get_eth_speed" },
	{ 0xaf273372, "vlan_dev_vlan_id" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xce214081, "ib_get_cached_gid" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf309ec7, "ib_umem_get" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6466de1e, "dcb_ieee_getapp_mask" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b958320, "ib_ud_ip4_csum" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0xf89c9227, "vlan_dev_real_dev" },
	{ 0xb5848bae, "__iowrite32_copy" },
	{ 0xdc8d485c, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6e949eed, "ib_umem_page_count" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bf4d99d, "ib_sg_to_pages" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xd2938951, "ib_modify_qp_is_ok" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd1525896, "ib_umem_release" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "DBDCBA4285DF9D855A73B3F");
MODULE_INFO(rhelversion, "8.0");
