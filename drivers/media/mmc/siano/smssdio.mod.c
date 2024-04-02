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
	{ 0xc626b989, "smscore_start_device" },
	{ 0x51618cab, "sdio_claim_irq" },
	{ 0x7fd02514, "sdio_set_block_size" },
	{ 0x309ae96b, "sdio_enable_func" },
	{ 0x8fca7eb6, "smscore_set_board_id" },
	{ 0xc5b7b986, "smscore_register_device" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x28318305, "snprintf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa87e602c, "sdio_memcpy_toio" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0x83e9a3a6, "smscore_getbuffer" },
	{ 0xfbca2c06, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0x4960d057, "sdio_memcpy_fromio" },
	{ 0x4b073e60, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xfca0d49b, "sdio_release_host" },
	{ 0xeb82d126, "sdio_disable_func" },
	{ 0x95404494, "sdio_release_irq" },
	{ 0x892d648d, "sdio_claim_host" },
	{ 0xdf9db815, "smscore_unregister_device" },
	{ 0x19805736, "smscore_putbuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "E84F33F700A6A5BF0C780A6");
MODULE_INFO(rhelversion, "8.0");
