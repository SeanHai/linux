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
	{ 0x842435b6, "rtl_cam_delete_one_entry" },
	{ 0xbb7b42e3, "rtl_fw_cb" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x85272531, "rtl8723_phy_reload_adda_registers" },
	{ 0xdb7d2d79, "rtl_pci_probe" },
	{ 0x2bd1820f, "rtl_cam_get_free_entry" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x3dc3bc3e, "rtl_dm_diginit" },
	{ 0x4287831e, "rtl_ps_disable_nic" },
	{ 0x5181765b, "rtl_btc_get_ops_pointer" },
	{ 0xbb2a4492, "rtl_hal_pwrseqcmdparsing" },
	{ 0xdbdd4c88, "rtl8723_download_fw" },
	{ 0x169d3927, "efuse_power_switch" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe69b26af, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x432a0655, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xe0ab3dc8, "rtl8723_dm_init_dynamic_txpower" },
	{ 0xce77302e, "rtl_pci_resume" },
	{ 0xb314a827, "rtl8723_phy_reload_mac_registers" },
	{ 0x17ba1984, "rtl_ps_enable_nic" },
	{ 0xc1b87dae, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7e2a2894, "rtl8723_dm_init_dynamic_bb_powersaving" },
	{ 0x27e1a049, "printk" },
	{ 0x80e4cd58, "rtl8723_phy_rf_serial_read" },
	{ 0x42242819, "rtl8723_phy_query_bb_reg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5def83f9, "skb_push" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x2e62d6f9, "rtl_signal_scale_mapping" },
	{ 0x62661a25, "rtl8723_phy_mac_setting_calibration" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0xc1772034, "rtl8723_phy_path_a_fill_iqk_matrix" },
	{ 0x77b6ac6c, "rtl_set_tx_report" },
	{ 0x1898ecc3, "rtl8723_dm_init_edca_turbo" },
	{ 0x9b1c985d, "rtl_pci_suspend" },
	{ 0x4de7fbef, "rtlwifi_rate_mapping" },
	{ 0x8af3816d, "rtl8723_save_adda_registers" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf3a676f9, "rtl_pci_disconnect" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x4484bec, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x153255d6, "rtl8723_phy_init_bb_rf_reg_def" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x70144638, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x84181fd, "rtl8723_phy_save_mac_registers" },
	{ 0xa90ca7f9, "rtl_cam_mark_invalid" },
	{ 0x676bd51a, "efuse_one_byte_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf02ac228, "rtl_cam_del_entry" },
	{ 0x951c620, "rtl_cam_empty_entry" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe9ed1139, "rtl_cam_reset_all_entry" },
	{ 0x4fe1c043, "rtl8723be_firmware_selfreset" },
	{ 0xd8e33714, "rtl8723_phy_path_adda_on" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xe74fc933, "rtl_process_phyinfo" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xe35bb2af, "rtl8723_phy_rf_serial_write" },
	{ 0x3f5bf9c0, "rtl8723_phy_calculate_bit_shift" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xf86f9fbb, "rtl8723_phy_set_bb_reg" },
	{ 0x9f5ad794, "param_ops_ullong" },
	{ 0x8baf8913, "rtl8723_phy_set_sw_chnl_cmdarray" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl8723-common,rtl_pci,btcoexist,mac80211";

MODULE_ALIAS("pci:v000010ECd0000B723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CF0CBB2F4446A615D0ABCBE");
MODULE_INFO(rhelversion, "8.0");
