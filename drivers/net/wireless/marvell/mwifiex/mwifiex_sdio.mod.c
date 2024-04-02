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
	{ 0x8ec36cf, "sdio_writeb" },
	{ 0x4b073e60, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x150b6997, "mwifiex_cancel_hs" },
	{ 0xd5d89db9, "sdio_writesb" },
	{ 0x309ae96b, "sdio_enable_func" },
	{ 0x51618cab, "sdio_claim_irq" },
	{ 0x79286b53, "mmc_hw_reset" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc048555f, "mwifiex_disable_auto_ds" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x487e9521, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x5958cccb, "mwifiex_main_process" },
	{ 0x91715312, "sprintf" },
	{ 0xe531df6e, "mwifiex_prepare_fw_dump_info" },
	{ 0x23931a30, "sdio_get_host_pm_caps" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x98b8f0a5, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x38c84b56, "mwifiex_add_card" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x7226a60b, "mwifiex_shutdown_sw" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x31bd9748, "mwifiex_alloc_dma_align_buf" },
	{ 0x7cde8739, "sdio_readsb" },
	{ 0x600aadeb, "sdio_unregister_driver" },
	{ 0x97058ed, "sdio_set_host_pm_flags" },
	{ 0xef1c907f, "mwifiex_dnld_fw" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x95404494, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd25fbef3, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe449d554, "mwifiex_reinit_sw" },
	{ 0x8130d609, "mwifiex_handle_rx_packet" },
	{ 0xcd828fc9, "mwifiex_deauthenticate_all" },
	{ 0xb37a8230, "mwifiex_remove_card" },
	{ 0xdf6cd3d2, "mwifiex_enable_hs" },
	{ 0x82cef748, "mwifiex_upload_device_dump" },
	{ 0x121da905, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1f6a7f0, "sdio_register_driver" },
	{ 0x892d648d, "sdio_claim_host" },
	{ 0x667ade5c, "mwifiex_drv_info_dump" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4b15b07a, "mwifiex_init_shutdown_fw" },
	{ 0x7fd02514, "sdio_set_block_size" },
	{ 0xeb82d126, "sdio_disable_func" },
	{ 0xfca0d49b, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "6D2C549033ABBE6ECC178D8");
MODULE_INFO(rhelversion, "8.0");
