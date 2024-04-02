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
	{ 0xa4a02131, "register_netdevice" },
	{ 0x8ec36cf, "sdio_writeb" },
	{ 0x4b073e60, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x317901f2, "wiphy_free" },
	{ 0xe70947a9, "cfg80211_connect_done" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x89e66458, "device_release_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x6a6f953b, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xae55feaa, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x309ae96b, "sdio_enable_func" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf56a1b05, "cfg80211_report_wowlan_wakeup" },
	{ 0x51618cab, "sdio_claim_irq" },
	{ 0x83bdf59a, "brcmu_pkt_buf_get_skb" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7c0c4b75, "cfg80211_rx_mgmt" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0xe30d174f, "driver_for_each_device" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x61d7b5b9, "brcmu_pktq_pdeq_tail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x357df27e, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xfc9331c9, "pm_runtime_allow" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xbe716c5e, "brcmu_pktq_penq" },
	{ 0x2f1be53f, "pci_pme_capable" },
	{ 0x9a1af1ac, "cfg80211_unregister_wdev" },
	{ 0x55a11b07, "brcmu_pktq_mdeq" },
	{ 0x7a23ce6d, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x23931a30, "sdio_get_host_pm_caps" },
	{ 0x4841bdee, "strnchr" },
	{ 0x16e9a4fd, "skb_unlink" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x62ce5396, "cfg80211_mgmt_tx_status" },
	{ 0xe9b41467, "param_ops_string" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x768eaf13, "mmc_wait_for_req" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x8dae0862, "sdio_writel" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x9ff63132, "cfg80211_vendor_cmd_reply" },
	{ 0xb8520774, "brcmu_pktq_pdeq_match" },
	{ 0xfb578fc5, "memset" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0xf10de535, "ioread8" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x27d33c23, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x636ef856, "mmc_set_data_timeout" },
	{ 0x6d4ac0c6, "sdio_readl" },
	{ 0xf464e4c2, "cfg80211_del_sta_sinfo" },
	{ 0x1dfc3e50, "ieee80211_get_channel" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x376f9f84, "brcmu_pktq_peek_tail" },
	{ 0x1b2390ac, "brcmu_pktq_flush" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x85d32ab5, "cfg80211_michael_mic_failure" },
	{ 0xabec451b, "wiphy_apply_custom_regulatory" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0x7b34746f, "cfg80211_ibss_joined" },
	{ 0x1b0519d6, "device_wakeup_enable" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cde8739, "sdio_readsb" },
	{ 0x600aadeb, "sdio_unregister_driver" },
	{ 0x5666192c, "sg_alloc_table" },
	{ 0x407ab874, "sdio_f0_writeb" },
	{ 0x97058ed, "sdio_set_host_pm_flags" },
	{ 0x38f69bbb, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x9f984513, "strrchr" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5edbabcb, "cfg80211_roamed" },
	{ 0xdfbde140, "cfg80211_put_bss" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcd2ee7e0, "__cfg80211_alloc_reply_skb" },
	{ 0x96615136, "wiphy_register" },
	{ 0x820a3a55, "cfg80211_crit_proto_stopped" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x95404494, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6e2f99b0, "cfg80211_classify8021d" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xea338798, "cfg80211_ready_on_channel" },
	{ 0x2027a168, "wiphy_new_nm" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd25fbef3, "sdio_f0_readb" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xf3c636, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xb1a72ac3, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa87e602c, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe47b2e84, "brcmu_pktq_penq_head" },
	{ 0x51d798ed, "brcmu_pktq_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x50e7a5be, "cfg80211_remain_on_channel_expired" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x1f6a7f0, "sdio_register_driver" },
	{ 0x509f625d, "consume_skb" },
	{ 0x4960d057, "sdio_memcpy_fromio" },
	{ 0xc5abdc0, "cfg80211_sched_scan_stopped" },
	{ 0x892d648d, "sdio_claim_host" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2ec1688, "cfg80211_scan_done" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x625ce867, "brcmu_pkt_buf_free_skb" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x7fd02514, "sdio_set_block_size" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xeb82d126, "sdio_disable_func" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfca0d49b, "sdio_release_host" },
	{ 0x96ea2a51, "cfg80211_sched_scan_results" },
	{ 0xecdd4b1, "brcmu_pktq_mlen" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,brcmutil,cfg80211";

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004365sv000014E4sd00004365bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "25B73C8F51C42C1A4E21EB0");
MODULE_INFO(rhelversion, "8.0");
