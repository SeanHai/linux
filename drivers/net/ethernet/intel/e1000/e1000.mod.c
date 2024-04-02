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
	{ 0x2d3385d3, "system_wq" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0xb27b8100, "pcix_set_mmrbc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xb64e20e3, "pcix_get_mmrbc" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe98d105f, "build_skb" },
	{ 0x835648b8, "pci_set_mwi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x76d451c4, "add_taint" },
	{ 0xe6478472, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xac5e6228, "pci_clear_mwi" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xf1eb5306, "pci_prepare_to_sleep" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe0a07210, "napi_get_frags" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x121da905, "queue_work_on" },
	{ 0xbd3fe1e3, "disable_hardirq" },
	{ 0x509f625d, "consume_skb" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xe88455d3, "napi_gro_frags" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001075sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001099sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E6Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A2C44EC5D0B865EE9C972D5");
MODULE_INFO(rhelversion, "8.0");
