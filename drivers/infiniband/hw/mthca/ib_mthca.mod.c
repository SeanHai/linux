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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xb27b8100, "pcix_set_mmrbc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe9e8c57e, "ib_register_mad_agent" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xb8cec420, "pcie_set_readrq" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce214081, "ib_get_cached_gid" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x86efc71c, "ib_free_send_mad" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x9aadd701, "rdma_destroy_ah" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbadd8259, "ib_rate_to_mult" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9b7dd98c, "ib_query_port" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x92a84c0b, "pcix_get_max_mmrbc" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf309ec7, "ib_umem_get" },
	{ 0x6626afca, "down" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd5aa72e3, "ib_get_cached_pkey" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0xdc8d485c, "ib_dispatch_event" },
	{ 0x6afbc366, "ib_create_send_mad" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2a0a66d5, "ib_post_send_mad" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x32c5fa9d, "ib_unregister_mad_agent" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x41a8670e, "rdma_create_ah" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd2938951, "ib_modify_qp_is_ok" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0xab0a3467, "mult_to_ib_rate" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0xb0734f0, "pcie_capability_write_word" },
	{ 0xd1525896, "ib_umem_release" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x9af36e0c, "get_user_pages_fast" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";

MODULE_ALIAS("pci:v000015B3d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00005E8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005E8Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6E706FB7F5472441E96841C");
MODULE_INFO(rhelversion, "8.0");
