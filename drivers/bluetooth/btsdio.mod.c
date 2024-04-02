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
	{ 0xd7442057, "bt_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcdebca32, "hci_recv_frame" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x7cde8739, "sdio_readsb" },
	{ 0x4b073e60, "sdio_readb" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xd5d89db9, "sdio_writesb" },
	{ 0x5def83f9, "skb_push" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x34584d81, "hci_register_dev" },
	{ 0xf3ff96ef, "hci_alloc_dev" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x51618cab, "sdio_claim_irq" },
	{ 0x309ae96b, "sdio_enable_func" },
	{ 0xfca0d49b, "sdio_release_host" },
	{ 0xeb82d126, "sdio_disable_func" },
	{ 0x95404494, "sdio_release_irq" },
	{ 0x8ec36cf, "sdio_writeb" },
	{ 0x892d648d, "sdio_claim_host" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x962eeb53, "hci_free_dev" },
	{ 0xe10f17e, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "2452201ABD58B1B2EF107BB");
MODULE_INFO(rhelversion, "8.0");
