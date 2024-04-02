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
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x1f6a7f0, "sdio_register_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0x27e1a049, "printk" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0x8ff84f09, "tty_standard_install" },
	{ 0xc6cbbc89, "capable" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x51618cab, "sdio_claim_irq" },
	{ 0x309ae96b, "sdio_enable_func" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x6bc86cbe, "tty_wakeup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0xd9d43bf8, "tty_port_tty_hangup" },
	{ 0xeb82d126, "sdio_disable_func" },
	{ 0x95404494, "sdio_release_irq" },
	{ 0x89b623c9, "tty_port_open" },
	{ 0x74ece01f, "tty_port_close" },
	{ 0xd9507c45, "tty_port_hangup" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x8ec36cf, "sdio_writeb" },
	{ 0xfca0d49b, "sdio_release_host" },
	{ 0x4b073e60, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x982191fd, "tty_port_put" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x892d648d, "sdio_claim_host" },
	{ 0xf7d6636f, "current_task" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "B060948E2EBFF168385495E");
MODULE_INFO(rhelversion, "8.0");
