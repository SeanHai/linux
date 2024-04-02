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
	{ 0x3b864ff4, "sys_imageblit" },
	{ 0xb00d8864, "sys_copyarea" },
	{ 0x310a9bca, "sys_fillrect" },
	{ 0x4ae12f3a, "fb_sys_write" },
	{ 0xa6240750, "fb_sys_read" },
	{ 0xecb2e5d, "cfag12864b_disable" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x3389f926, "cfag12864b_enable" },
	{ 0x2ff9464, "cfag12864b_isinited" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdec10080, "vm_insert_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x27e1a049, "printk" },
	{ 0x82b1cf66, "register_framebuffer" },
	{ 0xc48e9d95, "cfag12864b_buffer" },
	{ 0x631760d1, "framebuffer_alloc" },
	{ 0x95a7b42f, "framebuffer_release" },
	{ 0xb4cb9948, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b";


MODULE_INFO(srcversion, "5C559DC42552572171601F0");
MODULE_INFO(rhelversion, "8.0");
