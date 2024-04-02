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
	{ 0x984cfaf7, "ieee80211_rx_napi" },
	{ 0x842435b6, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbb7b42e3, "rtl_fw_cb" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2bd1820f, "rtl_cam_get_free_entry" },
	{ 0x28f4afab, "rtl92c_phy_set_rfpath_switch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb8f2e594, "rtl_usb_disconnect" },
	{ 0xaedce40b, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x9e66eec9, "rtl92c_phy_set_txpower_level" },
	{ 0x535fc516, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0xc75def6a, "rtl92c_dm_check_txpower_tracking" },
	{ 0x4287831e, "rtl_ps_disable_nic" },
	{ 0x7dc420c7, "rtl92c_dm_watchdog" },
	{ 0xe143c7fe, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x4f17822c, "_rtl92c_phy_rf_serial_write" },
	{ 0xe69b26af, "rtl_get_tcb_desc" },
	{ 0xb8bfbf1b, "_rtl92c_phy_rf_serial_read" },
	{ 0x236edbf0, "rtl92c_phy_set_bw_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x78f83df9, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x432a0655, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5fcac604, "rtl_phy_scan_operation_backup" },
	{ 0xba787013, "rtl92c_dm_init_edca_turbo" },
	{ 0x2721ed94, "rtl92c_phy_iq_calibrate" },
	{ 0x7a42f4fa, "rtl92c_dm_init" },
	{ 0x734da3f, "rtl_usb_probe" },
	{ 0x33448193, "rtl92c_phy_set_bb_reg" },
	{ 0x17ba1984, "rtl_ps_enable_nic" },
	{ 0xc1b87dae, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x9b4e037a, "rtl92c_dm_rf_saving" },
	{ 0xfbe70d41, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0xf3a08916, "dm_writepowerindex" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9f0da033, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x7c3f09a5, "_rtl92c_phy_set_rf_sleep" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0x4de7fbef, "rtlwifi_rate_mapping" },
	{ 0x8178097a, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x4e30c64c, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x4f183b54, "rtl_rfreg_delay" },
	{ 0x5fc11318, "rtl92c_phy_set_io_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x70144638, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa90ca7f9, "rtl_cam_mark_invalid" },
	{ 0xdfe291e7, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xf02ac228, "rtl_cam_del_entry" },
	{ 0x951c620, "rtl_cam_empty_entry" },
	{ 0x7909f8e7, "rtl92ce_phy_set_rf_on" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xd6d10d6b, "rtl92c_phy_query_bb_reg" },
	{ 0x7e1768ef, "_rtl92c_store_pwrIndex_diffrate_offset" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xe9ed1139, "rtl_cam_reset_all_entry" },
	{ 0x121da905, "queue_work_on" },
	{ 0xe74fc933, "rtl_process_phyinfo" },
	{ 0xe52ee4b0, "dm_restorepowerindex" },
	{ 0xf75a7df4, "efuse_read_1byte" },
	{ 0xf238b30f, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0xd8e34289, "rtl92c_fill_h2c_cmd" },
	{ 0xf18d7a58, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x9f5ad794, "param_ops_ullong" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi,rtl8192c-common,rtl_usb";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F64AA1606198F16F12C616B");
MODULE_INFO(rhelversion, "8.0");
