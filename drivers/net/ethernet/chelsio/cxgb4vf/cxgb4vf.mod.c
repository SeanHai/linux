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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xc7f4b92, "single_open" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xcdf36319, "seq_open" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x985ca3e0, "single_release" },
	{ 0x41715c18, "seq_puts" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xe94f64e1, "__hw_addr_sync_dev" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6e4edad6, "pci_clear_master" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x40d05ea7, "pcie_relaxed_ordering_enabled" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe0a07210, "napi_get_frags" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x28318305, "snprintf" },
	{ 0xb893b626, "seq_release" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xe88455d3, "napi_gro_frags" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001425d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005813sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005816sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000581Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000581Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005889sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005891sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005892sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005893sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005894sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005895sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005896sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005897sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005898sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005899sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000680Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006889sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "17DBD09C45DEE7D6BD23B09");
MODULE_INFO(rhelversion, "8.0");
