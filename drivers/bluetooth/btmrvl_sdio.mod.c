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
	{ 0x600aadeb, "sdio_unregister_driver" },
	{ 0x1f6a7f0, "sdio_register_driver" },
	{ 0x92dd36a, "btmrvl_register_hdev" },
	{ 0xfa32e63c, "btmrvl_add_card" },
	{ 0x27e1a049, "printk" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x7fd02514, "sdio_set_block_size" },
	{ 0x51618cab, "sdio_claim_irq" },
	{ 0x309ae96b, "sdio_enable_func" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5d89db9, "sdio_writesb" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x75605dbb, "btmrvl_check_evtpkt" },
	{ 0xcdebca32, "hci_recv_frame" },
	{ 0x5801143d, "btmrvl_process_event" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x21314a34, "btmrvl_send_module_cfg_cmd" },
	{ 0x406b432f, "btmrvl_remove_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x93ce3a8b, "btmrvl_interrupt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7cde8739, "sdio_readsb" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb82d126, "sdio_disable_func" },
	{ 0x95404494, "sdio_release_irq" },
	{ 0x97058ed, "sdio_set_host_pm_flags" },
	{ 0xafb1712a, "btmrvl_enable_hs" },
	{ 0x80a365b9, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xea77fbd, "hci_resume_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x23931a30, "sdio_get_host_pm_caps" },
	{ 0x155bae6f, "dev_coredumpv" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7442057, "bt_info" },
	{ 0x4b073e60, "sdio_readb" },
	{ 0xd25fbef3, "sdio_f0_readb" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47022514, "bt_err" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xfca0d49b, "sdio_release_host" },
	{ 0x8ec36cf, "sdio_writeb" },
	{ 0x892d648d, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "CB0F93871A368682D5EC3EB");
MODULE_INFO(rhelversion, "8.0");
